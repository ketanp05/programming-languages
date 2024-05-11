def names(name1, *args):
    print("Winner is {}".format(name1))
    print("Honorable Mentions")
    for n in args:
        print(n)

names('ketan', 'cristiano', 'salah', 'van dijk')