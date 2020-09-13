//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_04_ASSIGMENT_02_POINT_H
#define WEEK_04_ASSIGMENT_02_POINT_H


class Point {
public:
    static int instanceCount;
private:
    float _x{};
    float _y{};

public:
    [[nodiscard]] float getX() const;

    void setX(float x);

    [[nodiscard]] float getY() const;

    void setY(float y);

    Point(const float &x, const float &y);
    Point();
    ~Point();
    Point(const Point&);

    Point& operator=(const Point&);
};


#endif //WEEK_04_ASSIGMENT_02_POINT_H
