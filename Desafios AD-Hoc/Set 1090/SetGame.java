import java.util.*;

public class SetGame {

    static class Card {
        int number; // 1, 2 ou 3
        String shape; // circulo, quadrado ou triangulo

        Card(int number, String shape) {
            this.number = number;
            this.shape = shape;
        }

        @Override
        public boolean equals(Object o) {
            if (this == o) return true;
            if (o == null || getClass() != o.getClass()) return false;
            Card card = (Card) o;
            return number == card.number && shape.equals(card.shape);
        }

        @Override
        public int hashCode() {
            return Objects.hash(number, shape);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            int n = sc.nextInt();
            if (n == 0) break;
            sc.nextLine();
            List<Card> cards = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                String[] parts = sc.nextLine().split(" ");
                int number = convertToNumber(parts[0]);
                String shape = normalizeShape(parts[1]);
                cards.add(new Card(number, shape));
            }
            System.out.println(countValidSets(cards));
        }
        sc.close();
    }

    static int convertToNumber(String word) {
        switch (word) {
            case "um": return 1;
            case "dois": return 2;
            case "tres": return 3;
            default: throw new IllegalArgumentException("Número inválido: " + word);
        }
    }

    static String normalizeShape(String shape) {
        if (shape.endsWith("s")) {
            shape = shape.substring(0, shape.length() - 1);
        }
        return shape;
    }

    static int countValidSets(List<Card> cards) {
        Map<Card, Integer> cardCount = new HashMap<>();
        for (Card card : cards) {
            cardCount.put(card, cardCount.getOrDefault(card, 0) + 1);
        }

        int totalSets = 0;
        List<Card> uniqueCards = new ArrayList<>(cardCount.keySet());

        for (int i = 0; i < uniqueCards.size(); i++) {
            Card c1 = uniqueCards.get(i);
            for (int j = i; j < uniqueCards.size(); j++) {
                Card c2 = uniqueCards.get(j);
                for (int k = j; k < uniqueCards.size(); k++) {
                    Card c3 = uniqueCards.get(k);

                    if (isValidSet(c1, c2, c3)) {
                        int count1 = cardCount.get(c1);
                        int count2 = cardCount.get(c2);
                        int count3 = cardCount.get(c3);

                        if (c1.equals(c2) && c2.equals(c3)) {
                            totalSets += combinations(count1, 3);
                        } else if (c1.equals(c2)) {
                            totalSets += combinations(count1, 2) * count3;
                        } else if (c2.equals(c3)) {
                            totalSets += combinations(count2, 2) * count1;
                        } else if (c1.equals(c3)) {
                            totalSets += combinations(count1, 2) * count2;
                        } else {
                            totalSets += count1 * count2 * count3;
                        }
                    }
                }
            }
        }
        return totalSets;
    }

    static int combinations(int n, int r) {
        if (n < r) return 0;
        if (r == 0) return 1;
        if (r == 1) return n;
        if (r == 2) return n * (n - 1) / 2;
        if (r == 3) return n * (n - 1) * (n - 2) / 6;
        return 0;
    }

    static boolean isValidSet(Card c1, Card c2, Card c3) {
        return (allSameOrAllDifferent(c1.number, c2.number, c3.number) &&
                allSameOrAllDifferent(c1.shape, c2.shape, c3.shape));
    }

    static boolean allSameOrAllDifferent(int a, int b, int c) {
        return (a == b && b == c) || (a != b && a != c && b != c);
    }

    static boolean allSameOrAllDifferent(String a, String b, String c) {
        return (a.equals(b) && b.equals(c)) || (!a.equals(b) && !a.equals(c) && !b.equals(c));
    }
}
