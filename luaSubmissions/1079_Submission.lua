local numbers = {}
local N = io.read("*n")
function round(number, decimalPlaces)
    local multiplier = 10 ^ decimalPlaces
    return math.floor(number * multiplier + 0.5) / multiplier
end
for i = 1, N, 1 do
    for j = 1, 3, 1 do
        numbers[j] = io.read("*n")
    end
    local average = ((numbers[1]* 2) +(numbers[2] *3) +(numbers[3]* 5)) / 10
    print(round(average, 1))
end
