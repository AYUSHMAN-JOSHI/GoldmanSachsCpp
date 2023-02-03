#pragma once

namespace uiuc
{
    class cube
    {
        private:
            double length_;
        public:
            double getVolume();
            double getSurfaceArea();
            void setLength(double length);
    };

} // namespace uiuc
