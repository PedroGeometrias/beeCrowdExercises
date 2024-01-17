-- Problem : 1067 - Odd Numbers
local arrDeValores = {}
local count = tonumber(io.read())
for i = 1, count do
    arrDeValores[i] = i
end
for i = 1, count do
    if ((arrDeValores[i] % 2) ~= 0) then
        print(arrDeValores[i])
    end
end
