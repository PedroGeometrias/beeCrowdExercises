local alcoholCount = 0
local gasolineCount = 0
local dieselCount = 0

local function printReport()
    print("MUITO OBRIGADO")
    print("Alcool: ".. alcoholCount)
    print("Gasolina: ".. gasolineCount)
    print("Diesel: ".. dieselCount)
end

while true do
    local code = tonumber(io.read())

    if code == 1 then
        alcoholCount = alcoholCount + 1
    elseif code == 2 then
        gasolineCount = gasolineCount + 1
    elseif code == 3 then
        dieselCount = dieselCount + 1
    elseif code == 4 then
        break
    end
end

printReport()

