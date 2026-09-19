class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        //clamp will get the value which is closet to xcenter.
        int xi = clamp(xCenter,x1,x2);
        int yi = clamp(yCenter,y1,y2);
        // it will check the closest dist if dist is less than radius tha overlap did happen
        return sqrt((xi-xCenter)*(xi-xCenter) + (yi-yCenter)*(yi-yCenter)) <= radius;
    }
};