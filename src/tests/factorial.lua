function factorial (n)
  math = require "math"
  local sum = 1
  while n > 0 do
    sum = math.floor(sum * n)
    n = n - 1
  end
  return sum
end
local i = 1
while i < 100 do
  local f = factorial (i)
  print (f)
  i = i + 1
end
