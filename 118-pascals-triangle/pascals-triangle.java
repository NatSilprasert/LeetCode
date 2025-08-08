class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> answer = new ArrayList<>();

        for (int i = 0; i < numRows; i++) {
            List<Integer> row = new ArrayList<Integer>();

            row.add(1);  

            if (i > 0) {
                List<Integer> prevRow = answer.get(i - 1);
                for (int j = 1; j < prevRow.size(); j++) {
                    row.add(prevRow.get(j - 1) + prevRow.get(j));
                }
                row.add(1);
            }

            answer.add(row);
        }

        return answer;
    }
}