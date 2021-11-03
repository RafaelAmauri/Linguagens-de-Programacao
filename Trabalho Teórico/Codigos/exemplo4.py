class Point():
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def get_x(self):
        return self.x

    def get_y(self):
        return self.y


def main():
    p1 = Point(1,2)
    print(f"X = {p1.get_x()}\nY = {p1.get_y()}")


main()