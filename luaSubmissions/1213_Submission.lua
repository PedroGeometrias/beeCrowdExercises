local function multiplo_calculado(n)
    local remainder = 1 % n  
    local length = 1        

    while remainder ~= 0 do
        remainder = (remainder * 10 + 1) % n  
        length = length + 1 
    end

    return length
end

while true do
    n = io.read("*n") 
    if not n then break end
    print(multiplo_calculado(n))
end 

--[[ str = string.rep('1', 4)
print(str) ]]
