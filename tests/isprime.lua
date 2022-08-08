local function isprime (n)
  local n = math.sqrt(n)
  while n > 0 do
    if n % 2 then
      return false
    else
      n = n / 2
    end
  return true
end

end
print (isprime(1000))
