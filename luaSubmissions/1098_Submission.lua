local function round(num, numDecimalPlaces)
    local mult = 10^(numDecimalPlaces or 0)
    return math.floor(num * mult + 0.5) / mult
end

for i = 0, 2, 0.2 do
    for j = 1, 3, 1 do
        local result = round(i + j, 1)
        if result == math.floor(result) then
            print(string.format("I=%.0f J=%.0f", i, result))
        else
            print(string.format("I=%.1f J=%.1f", i, result))
        end
    end
end

