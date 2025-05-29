local function totalSquares(n)
    if n == 0 then
        return 0 
    else
        return n * n + totalSquares(n - 1) 
    end
end

while true do
    local n = io.read("*n")
    if n == 0 then break end
    print(totalSquares(n))
end

