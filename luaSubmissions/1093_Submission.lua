function calculate_probability(ev1, ev2, at, d)
    local total_turns_ev1 = math.ceil(ev1 / d)
    local total_turns_ev2 = math.ceil(ev2 / d)
    local prob_v1_wins_turn = at / 6
    local prob_v2_wins_turn = 1 - prob_v1_wins_turn

    if prob_v1_wins_turn == 0.5 then
        return 50.0
    end

    local q = prob_v2_wins_turn / prob_v1_wins_turn
    local probability_v1_wins = (1 - math.pow(q, total_turns_ev1)) / (1 - math.pow(q, total_turns_ev1 + total_turns_ev2))
    return probability_v1_wins * 100
end

while true do
    local ev1, ev2, at, d = io.read("*n", "*n", "*n", "*n")
    if ev1 == 0 and ev2 == 0 and at == 0 and d == 0 then
        break
    end

    local probability = calculate_probability(ev1, ev2, at, d)
    print(string.format("%.1f", probability))
end

