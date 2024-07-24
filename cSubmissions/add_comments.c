// CODE BY pedroGeometrias
// ID -> add
/*
* This bad boy will parse through the dir and comment on everything, I love c
*/

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

#define COMMENT1 "// CODE BY pedroGeometrias\n"
#define COMMENT2 "// ID -> "

void process_file(const char *filename, const char *id) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("fopen");
        return;
    }

    char *buffer = NULL;
    size_t size = 0;
    ssize_t read;

    int has_comment1 = 0;
    int has_comment2 = 0;

    for (int i = 0; i < 2; i++) {
        read = getline(&buffer, &size, file);
        if (read == -1) {
            break;
        }
        if (i == 0 && strcmp(buffer, COMMENT1) == 0) {
            has_comment1 = 1;
        }
        if (i == 1 && strncmp(buffer, COMMENT2, strlen(COMMENT2)) == 0 && strstr(buffer, id)) {
            has_comment2 = 1;
        }
    }

    free(buffer);
    fclose(file);

    if (has_comment1 && has_comment2) {
        return;
    }

    file = fopen(filename, "r");
    if (!file) {
        perror("fopen");
        return;
    }

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);
    char *file_content = malloc(file_size + 1);
    fread(file_content, 1, file_size, file);
    file_content[file_size] = '\0';
    fclose(file);

    file = fopen(filename, "w");
    if (!file) {
        perror("fopen");
        free(file_content);
        return;
    }

    if (!has_comment1) {
        fputs(COMMENT1, file);
    }
    if (!has_comment2) {
        fprintf(file, "%s%s\n", COMMENT2, id);
    }
    fputs(file_content, file);

    free(file_content);
    fclose(file);
}

void process_directory(const char *dir_name) {
    DIR *dir = opendir(dir_name);
    if (!dir) {
        perror("opendir");
        return;
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_REG) {
            char *filename = entry->d_name;
            char *ext = strrchr(filename, '.');
            if (ext && strcmp(ext, ".c") == 0) {
                char id[10] = {0};
                strncpy(id, filename, strcspn(filename, "_"));

                char filepath[1024];
                snprintf(filepath, sizeof(filepath), "%s/%s", dir_name, entry->d_name);
                printf("Processing file: %s with ID: %s\n", filepath, id);
                process_file(filepath, id);
            }
        }
    }

    closedir(dir);
}

int main() {
    const char *dir_name = "."; 
    printf("Opening directory: %s\n", dir_name);
    process_directory(dir_name);
    return 0;
}

