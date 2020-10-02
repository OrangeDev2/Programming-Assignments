def DNA_strand(dna):
    CompleDNA = {"A": "T", "T": "A", "C": "G", "G": "C"}
    
    string = ''

    for x in dna:
        string += CompleDNA[x]
    print(string)
    
DNA_strand("AAAA") # return "TTTT"
