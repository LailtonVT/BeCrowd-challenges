from itertools import combinations
from collections import Counter

def parse_card(card):
    number_map = {"um": 1, "dois": 2, "tres": 3}
    shape_map = {
        "circulo": "circulo", "circulos": "circulo",
        "quadrado": "quadrado", "quadrados": "quadrado",
        "triangulo": "triangulo", "triangulos": "triangulo"
    }
    number, shape = card.split()
    return (number_map[number], shape_map[shape])

def is_valid_set(cards):
    for i in range(2):  # Verificar número e figura
        values = {card[i] for card in cards}
        if len(values) == 2:  # Não pode ter exatamente dois valores iguais
            return False
    return True

def count_sets(cards):
    parsed_cards = [parse_card(card) for card in cards]
    card_counts = Counter(parsed_cards)
    count = 0
    for combo in combinations(parsed_cards, 3):
        if is_valid_set(combo):
            # Se todas as cartas forem iguais, só deve contar se houver pelo menos 3 iguais
            if len(set(combo)) == 1:
                if card_counts[combo[0]] >= 3:
                    count += 1
            else:
                count += 1
    return count

def main():
    while True:
        n = int(input())
        if n == 0:
            break
        cards = [input().strip() for _ in range(n)]
        print(count_sets(cards))