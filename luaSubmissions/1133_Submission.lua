local x = io.read("*n")
local y = io.read("*n")

if x > y then
    temp = x
    x = y 
    y = temp
end

for i = x + 1, y - 1 do
    if i % 5 == 2 or i % 5 == 3 then
        print(i)
    end
end

