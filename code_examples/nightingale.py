ACTIVE_TIME = 'Night (10 p.m. to 7 a.m.)'

class Nightingale():
    name = 'Common Nightingale'
    scientific_name = 'Luscinia megarhynchos'
    population_status = 'stable'
    average_mass = 20#g
    active_time = ACTIVE_TIME
    
    def __str__(self):
        return f'Name: {self.name}'
    
    def sing(self):
        for i in range(10):
            print('Coding...')

if __name__=='__main__':
    nightingale = Nightingale()
    nightingale.sing()





