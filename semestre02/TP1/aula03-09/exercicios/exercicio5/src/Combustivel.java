
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author fatec-dsm2
 */
public class Combustivel {
    private double litros;
    private double totalGasto;
    private double km;
    private double valorComb;
    
    Scanner sc = new Scanner(System.in);

    public Combustivel() {
        this(0.0, 0.0, 0.0, 0.0);
    }

    public Combustivel(double litros, double totalGasto, double km, double valorComb) {
        this.litros = litros;
        this.totalGasto = totalGasto;
        this.km = km;
        this.valorComb = valorComb;
    }

    public double getLitros() {
        return litros;
    }

    public void setLitros(double litros) {
        this.litros = litros;
    }

    public double getTotalGasto() {
        return totalGasto;
    }

    public void setTotalGasto(double totalGasto) {
        this.totalGasto = totalGasto;
    }

    public double getKm() {
        return km;
    }

    public void setKm(double km) {
        this.km = km;
    }

    public double getValorComb() {
        return valorComb;
    }

    public void setValorComb(double valorComb) {
        this.valorComb = valorComb;
    }
    
    public void calcularLitros(double km){
        this.setLitros(km/12);
        System.out.println("A quantidade de litros usada foi " + getLitros());
    }
    
    public void calcularTotalGasto(double valorComb){
        this.setTotalGasto(this.getLitros() * valorComb);
        System.out.println("O total gasto foi " + getTotalGasto());
    }
}
