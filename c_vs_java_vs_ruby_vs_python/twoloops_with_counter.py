i = 0
counter = 0
while i < 100000:
    j = i
    while j < 100000:
        j += 1
        counter += 1
    i += 1
print '%d iterations' % counter
