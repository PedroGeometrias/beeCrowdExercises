local a ={}
local N = io.read("*n")
for i = 1, N, 1 do
    a[i] = io.read("*n")
    if a[i] == 0 then
       print("NULL") 
    else 
    if a[i] % 2 ~= 0 then
        io.write("ODD ")
    else
        io.write("EVEN ")
    end
    if a[i] < 0 then
        io.write("NEGATIVE")
        io.write("\n")
    else
        io.write("POSITIVE")
        io.write("\n")
    end
    end 
end
