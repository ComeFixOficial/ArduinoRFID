from flask import Flask, render_template
import serial

app = Flask(__name__)
ser = serial.Serial('COM3', 9600)

@app.route('/')
def index():
    data = ser.readline().decode().strip()  # Leer datos desde Arduino
    return render_template('index.html', rfid_data=data)

if __name__ == '__main__':
    app.run(debug=True) 
