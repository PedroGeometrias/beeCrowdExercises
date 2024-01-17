local a = {}
local b = {}
a[1] = io.read("*n")
a[2] = io.read("*n")
a[3] = io.read("*n")
a[4] = io.read("*n")
a[5] = io.read("*n")
a[6] = io.read("*n")

local function round(num, decimalPlaces)
    local x = 10^(decimalPlaces or 0)
    return math.floor(num * x + 0.5) / x
end
local posi = 0
local medi = 0
for iter = 1, 6, 1 do
	if a[iter] > 0 then
		posi = posi + 1
		b[posi] = a[iter]
	end
end
for iter = 1, posi, 1 do
	medi = b[iter] + medi
end
local div = medi / posi
print(posi .. " valores positivos")
print(round(div, 1))
