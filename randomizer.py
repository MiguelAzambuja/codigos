#recieve inputs untill a blank line is entered
#then choose one of the imputs at random and print it
def randomizer():
    import random
    inputs = []
    while True:
        inp = input("Enter a word: ")
        if inp == "":
            break
        inputs.append(inp)
    print(random.choice(inputs))
randomizer()