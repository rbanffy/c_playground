i = 0
counter = 0
while i < 100_000 do
  j = i
  while j < 100_000 do
    j = j + 1
    counter = counter + 1
  end
  i = i + 1
end
printf("%d iterations\n", counter)
