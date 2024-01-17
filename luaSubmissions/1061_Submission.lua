-- Problem : 1061 - Event Time 
function converteParaSegundos(horas, minutos, segundos)
    return horas * 3600 + minutos * 60 + segundos
end

function calculaDuracaoEvento(diaInicio, horaInicio, diaFim, horaFim)
    local diaIni = tonumber(diaInicio:match("(%d+)"))
    local horaIni, minutoIni, segundoIni = horaInicio:match("(%d+)%s*:%s*(%d+)%s*:%s*(%d+)")
    
    local diaFim = tonumber(diaFim:match("(%d+)"))
    local horaFim, minutoFim, segundoFim = horaFim:match("(%d+)%s*:%s*(%d+)%s*:%s*(%d+)")

    local duracaoSegundos = converteParaSegundos(horaFim, minutoFim, segundoFim) - converteParaSegundos(horaIni, minutoIni, segundoIni)

    local duracaoDias = diaFim - diaIni
    local duracaoHoras = math.floor(duracaoSegundos / 3600)
    duracaoSegundos = duracaoSegundos % 3600
    local duracaoMinutos = math.floor(duracaoSegundos / 60)
    duracaoSegundos = duracaoSegundos % 60

    if duracaoHoras < 0 then
        duracaoDias = duracaoDias - 1
        duracaoHoras = duracaoHoras + 24
    end

    print(math.abs(duracaoDias) .. " dia(s)")
    print(duracaoHoras .. " hora(s)")
    print(duracaoMinutos .. " minuto(s)")
    print(duracaoSegundos .. " segundo(s)")
end

local diaInicio = io.read()
local horaInicio = io.read()
local diaFim = io.read()
local horaFim = io.read()

calculaDuracaoEvento(diaInicio, horaInicio, diaFim, horaFim)
