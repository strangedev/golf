print([x for x in range(1,201)if sum((y for y in range(1,x)if x%y==0))>x])