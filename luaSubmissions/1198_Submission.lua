function calcularDiferenca(x, n)
   result = x - n 
    if result < 0 then
       result  = result * -1 
    end
    return result
end
while true do
    x, n = io.read("*n", "*n") 
    if not n then break end
    print(calcularDiferenca(x, n))
end 
