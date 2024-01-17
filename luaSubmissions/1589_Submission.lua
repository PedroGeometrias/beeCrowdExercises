-- Problem : 1589 - Bob Conduit 
local casosTeste = tonumber(io.read())

function calcularRaioConduite(n1, n2) 
    local raioConduite = n1 + n2

    return raioConduite
end

for i = 1, casosTeste do 
    local n1, n2 = io.read():match("(%d+) (%d+)")
    n1, n2 = tonumber(n1), tonumber(n2)

    local raioConduite = calcularRaioConduite(n1, n2)
    print(raioConduite)
end

