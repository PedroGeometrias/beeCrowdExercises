local function encaixa(val1, val2)
    str1 = tostring(val1) 
    str1_len = string.len(str1)
    str2 = tostring(val2)
    str2_len = string.len(str2)
    if str1_len < str2_len then
        return "nao encaixa"
    end
    new_arr = string.sub(str1, -str2_len, str1_len)
    if new_arr == str2 then
       return "encaixa" 
    else
        return"nao encaixa"
    end
end

casos = io.read("*n")
for i=1, casos, 1 do
   print(encaixa(io.read("*n"), io.read("*n"))) 
end
