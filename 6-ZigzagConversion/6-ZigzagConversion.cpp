        for (int i = 0; i < numRows; i++) {
            rows[i] = "";
        }
        int height = 0;
        bool travel = false;

        for (int i = 0; i < s.size(); i++) {
            if (height == 0 || height == numRows - 1)
                travel = !travel;

            rows[height] += s[i];

            height += travel ? 1 : -1;
        }
        string result = "";
        for (int i = 0; i < numRows; i++) {
            result += rows[i];
        }
        return result;
    }
};
"
