    local N = io.read("*n")

local totalAnimals = 0
local totalRabbits = 0
local totalRats = 0
local totalFrogs = 0

io.read("*l")

for i = 1, N do
    local line = io.read("*line")
    local amount, animalType = line:match("(%d+) (%a)")

    totalAnimals = totalAnimals + tonumber(amount)

    if animalType == "C" then
        totalRabbits = totalRabbits + tonumber(amount)
    elseif animalType == "R" then
        totalRats = totalRats + tonumber(amount)
    elseif animalType == "S" then
        totalFrogs = totalFrogs + tonumber(amount)
    end
end

print("Total: " .. totalAnimals .. " cobaias")
print("Total de coelhos: " .. totalRabbits)
print("Total de ratos: " .. totalRats)
print("Total de sapos: " .. totalFrogs)

local percentRabbits = (totalRabbits / totalAnimals) * 100
local percentRats = (totalRats / totalAnimals) * 100
local percentFrogs = (totalFrogs / totalAnimals) * 100

print(string.format("Percentual de coelhos: %.2f %%", percentRabbits))
print(string.format("Percentual de ratos: %.2f %%", percentRats))
print(string.format("Percentual de sapos: %.2f %%", percentFrogs))

