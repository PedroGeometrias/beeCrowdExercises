local operation = io.read()

local matrix = {}
for i = 1, 12 do
    matrix[i] = {}
    for j = 1, 12 do
        matrix[i][j] = tonumber(io.read())
    end
end

local sum = 0
local count = 0

for i = 1, 5 do
    for j = i + 1, 12 - i do
        sum = sum + matrix[i][j]
        count = count + 1
    end
end

if operation == "S" then
    print(string.format("%.1f", sum))
elseif operation == "M" then
    print(string.format("%.1f", sum / count))
end
