local J = 60
for I = 1, 60, 3 do
    print("Ii="..I.." ".. "J="..J)
    if J <= 0 then
        break
    end
    J = J - 5
end
