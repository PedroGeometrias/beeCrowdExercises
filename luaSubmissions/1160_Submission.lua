local function calculateYears(PA, PB, G1, G2)
    local years = 0

    while PA <= PB do
        PA = math.floor(PA * (1 + G1 / 100))
        PB = math.floor(PB * (1 + G2 / 100))
        years = years + 1

        if years > 100 then
            print("Mais de 1 seculo.")
            return
        end
    end

    print(years .. " anos.")
end

local function processTestCase()
    local PA, PB, G1, G2 = io.read("*n", "*n", "*n", "*n")
    calculateYears(PA, PB, G1, G2)
end

local function main()
    local T = io.read("*n")

    for _ = 1, T do
        processTestCase()
    end
end

main()

