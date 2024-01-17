local M, N
local soma = 0

while 1 do
    M = io.read("*n")
    N = io.read("*n")
    if M > 0 and N > 0 then
        if M < N then
        local temp = M
        M = N
        N = temp
    end
    for i = N, M, 1 do
        soma = soma + i
        io.write(i .. " ")
    end
        io.write("Sum="..soma.."\n")
    else
        break
    end
end
