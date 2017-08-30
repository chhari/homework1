import unittest
import sys
import numpy as np
from random import uniform


class DFTTestCase(unittest.TestCase):

    def test_error(self):

        try:
            a=[1+2j,2]
            DFT(a)
            b=(1+2j,3+9j)
            DFT(b)
            c=range(-3)
            DFT(c)
            DFT({0:5,5:6})
            DFT(2)
            DFT(2+6j)
            d=[1+2j,2+i]
            DFT(d)
            DFT([(1+2j,2),(1+2j,3+9j)])
            DFT(([1+0j],[1+1j],[1+2j,2+2j]))

        except ValueError :
            print("invalid input")


    def test_1(self):
        ab=[1+2j]
        ac=(1+2j ,3, 4+1j)
        DFT(ab)
        #if(ab != [1+2j,2]):
        #    print( "DFT() messes with input")
        self.assertEqual([1+2j], ab ,msg= "zzzzz")
        self.assertEqual((1+2j ,3, 4+1j), ac ,msg= "zzzzz")


    def test_dime(self):
        b=(1+2j,3+9j)
        p=DFT(b)


        if(p.shape != (len(p),)):
            print("shape out of bounds")


        if(type(p) != np.ndarray):
            print("invalid data type")


    def test_results(self):

        for N in range (2,20):
            ip = np.zeros(N, dtype=complex)

            for i in range (1,N):
                a=uniform(-1,1)
                b=uniform(-1,1)
                ip[i] = a+b*1j

            for l in range (1,10):
                op = DFT(ip)
                res = np.fft.fft(op)
                if(np.allclose(op,res)):
                    pass
                else:
                    print("DFT()'s & FFT()'s output are not matching")







if __name__ == '__main__':
    from w6_dft import DFT
    unittest.main()
