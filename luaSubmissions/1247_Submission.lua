function calcularPerseguicao(d, vf, vg)
    ch = '0'
    local distanciaGuarda = math.sqrt(d^2 + 12^2) 
    
    local tempoFugitivo = 12 / vf
    
    local tempoGuarda = distanciaGuarda / vg

    if tempoGuarda <= tempoFugitivo then
        ch = 'S'
    else
        ch = 'N'
    end
    return ch
end

while true do
    d, vf, vg = io.read("*n", "*n", "*n")
    if not d then break end
    print(calcularPerseguicao(d, vf, vg))
end

