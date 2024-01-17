-- Problem : 1065 - Even Between five Numbers 
local arrDeValores = {}
local count = 0;

for i = 1, 5 do
    arrDeValores[i] = tonumber(io.read())
end

for i = 1, 5 do
    if arrDeValores[i] % 2 == 0 then 
        count = count + 1
    end
end

print(count .. " valores pares")

