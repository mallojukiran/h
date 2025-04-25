using System;
using Figgle;

class Program
{
    static void Main(string[] args)
    {
        string message = "Hey Kanni, how are you?";
        string asciiArt = FiggleFonts.Standard.Render(message);
        Console.WriteLine(asciiArt);
    }
}
