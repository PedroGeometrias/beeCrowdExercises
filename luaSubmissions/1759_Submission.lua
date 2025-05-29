local matrix = {}
local i = io.read("n")
for j = 1, i do
    matrix[i] = "Ho"
end
for j = 1, i do
    io.write(matrix[i])
    if j ~= i then
        io.write(" ")
    end
end
io.write("!")
io.write("\n")
