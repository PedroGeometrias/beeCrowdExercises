local a = {}
local maiorVal = 0
local posi
for i = 1, 100, 1 do
    a[i] = io.read("*n")
end
for i = 1, 100, 1 do
    if maiorVal < a[i] then
        maiorVal = a[i]
        posi = i
    end
end
print(maiorVal)
print(posi)
