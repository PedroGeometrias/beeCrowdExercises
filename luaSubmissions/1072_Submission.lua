local inter = {}
local N = io.read("*n");
local inN = 0
local out = 0
for i = 1, N, 1 do
    inter[i] = io.read("*n")    
end

for i = 1, N, 1 do
    if inter[i] >= 10 and inter[i] <= 20 then
        inN = 1 +inN 
    else
        out = 1 + out 
    end

end
print(inN.." in")
print(out.." out")


