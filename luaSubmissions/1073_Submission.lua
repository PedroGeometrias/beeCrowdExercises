local N = io.read("*n")
for i = 1, N, 1 do
    if i % 2 == 0 then
        print(i.."^2 = "..i*i)
    end
end
