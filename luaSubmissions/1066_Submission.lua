-- Problem : 1066 - Even, Odd, Positive and Negative 
local a = {}

a[1] = 0
a[2] = 0
a[3] = 0
a[4] = 0
a[5] = 0

a[1] = io.read("*n")
a[2] = io.read("*n")
a[3] = io.read("*n")
a[4] = io.read("*n")
a[5] = io.read("*n")

local par = 0
local impar = 0
local posi = 0
local neg = 0

for iter = 1, 5, 1 do
    if a[iter] < 0 then
        neg = neg + 1
    elseif a[iter] > 0 then
        posi = posi + 1
    end
    if a[iter] % 2 == 0 then
        par = par + 1
    else
        impar = impar + 1
    end
end

print(par .. " valor(es) par(es)")
print(impar .. " valor(es) impar(es)")
print(posi .. " valor(es) positivo(s)")
print(neg .. " valor(es) negativo(s)")

