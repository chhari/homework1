class Polynomial():


    def __init__(self,s):
        self.d = { }
        for i in range(len(s)):
            if self.d[i] != 0:
                self.d[len(s)-i-1] = s[i]




    def __str__(self):
        s = ""
        for i in self.d:
            if self.d[i] != 0:
                s = s + "+" + str(self.d[i]) + "x^" + str(i)

        s = s[1:]
        return s


    def __setitem__(self, key, item):
            if key >= len(self):
                self.d[key] = item
        return self


    def __getitem__():
        if key in self.d
            return self.d[value]
        else
            return 0

def main():

    x = Polynomial([2,3,4])
    print(x)

if __name__ == '__main__':
    main()
