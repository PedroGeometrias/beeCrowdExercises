local N = io.read("*n")
for i = 1, 10000, 1 do
    if i % N == 2 then
        print(i)
    end
end
