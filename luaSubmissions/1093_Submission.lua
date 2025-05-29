function calculate_probability(ev1, ev2, at, d)
    local p1 = at / 6
    local p2 = 1 - p1

    local rounds_v1 = math.ceil(ev1 / d)
    local rounds_v2 = math.ceil(ev2 / d)

    if p1 == 1 then return 100.0 end
    if p2 == 1 then return 0.0 end

    if p1 == p2 then
        return (rounds_v1 / (rounds_v1 + rounds_v2)) * 100
    else
        local q = p2 / p1
        local probability_v1 = (1 - q^rounds_v1) / (1 - q^(rounds_v1 + rounds_v2))
        return probability_v1 * 100
    end
end

while true do
    local input = io.read()
    local ev1, ev2, at, d = input:match("(%d+) (%d+) (%d+) (%d+)")
    ev1, ev2, at, d = tonumber(ev1), tonumber(ev2), tonumber(at), tonumber(d)

    if ev1 == 0 and ev2 == 0 and at == 0 and d == 0 then
        break
    end
    local result = calculate_probability(ev1, ev2, at, d)
    print(string.format("%.1f", result))
end

