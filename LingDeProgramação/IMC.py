def calcular_imc(peso, altura):
    imc = peso / (altura ** 2)
    return imc

peso = float(input("Digite o peso em kg: "))
altura = float(input("Digite a altura em metros: "))

imc_resultado = calcular_imc(peso, altura)
print("Seu IMC é:", imc_resultado)

if imc_resultado < 14.5:
    classificacao = "Desnutrição"
elif imc_resultado >= 14.5 and imc_resultado < 20:
    classificacao = "Peso abaixo do normal"
elif imc_resultado >= 20 and imc_resultado < 25:
    classificacao = "Peso normal"
elif imc_resultado >= 25 and imc_resultado < 30:
    classificacao = "Sobrepeso"
elif imc_resultado >= 30 and imc_resultado < 40:
    classificacao = "Obesidade"
else:
    classificacao = "Obesidade mórbida"

print("Sua classificação é:", classificacao)


