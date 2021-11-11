#include <stdio.h>
#include <windows.h>
#include <conio.h>

// Procedimento que mostra o Menu Principal
void mostra_menu_principal()
// Mostra o Menu
{
    printf("\n ---------------------------------");
    printf("\n Menu Principal");
    printf("\n ---------------------------------");
    printf("\n[1] Jogar");
    printf("\n[2] Como jogar");
    printf("\n[3] Creditos");
    printf("\n[4] Sair");
    printf("\n ---------------------------------");
    printf("\n Qual e sua escolha? ");
}
// Mostra a explicacao do jogo
void Como_Jogar()
{
    printf("\n ---------------------------------");
    printf("\n Para jogar digite o numero da alternativa que achar correta e precione Enter");
    printf("\n Ao termino do jogo voce vera o seu resultado");
    printf("\n Anote seus resultados e desafie seus amigos");
    printf("\n Agradecemos por jogar");
    printf("\n ---------------------------------");
}
// Mostra dos creditos
void Creditos()
{
    printf("\n ---------------------------------");
    printf("\n Aluno Desenvolvedor: Gabriel Moreira Rodrigues");
    printf("\n Aluno Desenvolvedor: Pedro Daibert");
    printf("\n ---------------------------------");
}
// Mostra os temas
void temas()
{
    printf("\n ---------------------------------");
    printf("\n[1] Computacao");
    printf("\n[2] Jogos");
    printf("\n[3] Serie");
    printf("\n[4] Anime");
    printf("\n[5] Automobilismo");
    printf("\n ---------------------------------");
}
// Mostra a pergunta 1 de computacao d
void pergunta_1_computacao()
{
    printf("\n ---------------------------------");
    printf("\n Qual e a linguagem de programacao mais utilizada?");
    printf("\n[a] Python");
    printf("\n[b] C");
    printf("\n[c] Cobol");
    printf("\n[d] Java");
    printf("\n ---------------------------------");
}
// Mostra a pergunta 2 de computacao c
void pergunta_2_computacao()
{
    printf("\n ---------------------------------");
    printf("\n Qual a peca mais usada na iniciacao de uma maquina?");
    printf("\n[a] CPU");
    printf("\n[b] Disco");
    printf("\n[c] Placa Mae");
    printf("\n[d] GPU");
    printf("\n ---------------------------------");
}
// Mostra a pergunta 3 de computacao d
void pergunta_3_computacao()
{
    printf("\n ---------------------------------");
    printf("\n Quantos MB tem 1GB(binario)?");
    printf("\n[a] 1025");
    printf("\n[b] 100240");
    printf("\n[c] 1000");
    printf("\n[d] 1024");
    printf("\n ---------------------------------");
}
// Mostra a pergunta 4 de computacao b
void pergunta_4_computacao()
{
    printf("\n ---------------------------------");
    printf("\n Qual dessas opcoes e uma linguagem de programacao?");
    printf("\n[a] JAVAI");
    printf("\n[b] RUBY");
    printf("\n[c] paitom");
    printf("\n[d] Javai Script");
    printf("\n ---------------------------------");
}
// Mostra a pergunta 5 de computacao c
void pergunta_5_computacao()
{
    printf("\n ---------------------------------");
    printf("\n Em c# qual o significado do comando console.writeLine");
    printf("\n[a] Escreve algo na tela");
    printf("\n[b] Pede informacoes do usuario");
    printf("\n[c] Escreve algo na tea pulando uma linha");
    printf("\n[d] Usa de metodos inenarraveis para distinguir verdadeiro ou falso");
    printf("\n ---------------------------------");
}
// Mostra a perguna 6 de computacao a
void pergunta_6_computacao()
{
    printf("\n ---------------------------------");
    printf("\n Qual e a utilidade de uma placa de video?");
    printf("\n[a] Melhora o desempenho grafico");
    printf("\n[b] Gravar video");
    printf("\n[c] Estoque de memoria RAM");
    printf("\n[d] Nome da Placa Mae");
    printf("\n ---------------------------------");
}
// Mostra a pergunta 7 de computacao b
void pergunta_7_computacao()
{
    printf("\n ---------------------------------");
    printf("\n Como comparamos uma variavel?");
    printf("\n[a] if(x=y)");
    printf("\n[b] if(x==y)");
    printf("\n[c] if(x!=y)");
    printf("\n[d] if(x~=y)");
    printf("\n ---------------------------------");
}
// Mostra a perguna 8 de computacao c
void pergunta_8_computacao()
{
    printf("\n ---------------------------------");
    printf("\n Qual companhia de software mais rentavel?");
    printf("\n[a] HP");
    printf("\n[b] IBM");
    printf("\n[c] Microsoft");
    printf("\n[d] Oracle");
    printf("\n ---------------------------------");
}
//Mostra a questao 9 de computacao a
void pergunta_9_computacao()
{
    printf("\n ---------------------------------");
    printf("\n Qual e o sistema operacional mais usado?");
    printf("\n[a] Android");
    printf("\n[b] Windows");
    printf("\n[c] IOS");
    printf("\n[d] Linux");
    printf("\n ---------------------------------");
}
// Mostra a questao 10 de computacao d
void pergunta_10_computacao()
{
    printf("\n ---------------------------------");
    printf("\n Qual dessas empresas nao fabrica placas de video?");
    printf("\n[a] Intel");
    printf("\n[b] Nvidea");
    printf("\n[c] GigaByte");
    printf("\n[d] Hyperx");
    printf("\n ---------------------------------");
}
// Mostra a questao 1 de jogos c
void pergunta_1_jogos()
{
    printf("\n ---------------------------------");
    printf("\n No jogo Call Of Duty World at War existe o modo Zumbis, como esse modo e desbloqueado?");
    printf("\n[a] E um modo natural do jogo");
    printf("\n[b] Se libera fazendo todas as conquistas do jogo");
    printf("\n[c] Zerando o jogo");
    printf("\n[d] So e liberado modificando as pastas do jogo");
    printf("\n ---------------------------------");
}
// Mostra a questao 2 de jogos b
void pergunta_2_jogos()
{
    printf("\n ---------------------------------");
    printf("\n No jogo Gears of War 4 como sao chamados os novos inmigos?");
    printf("\n[a] Locust");
    printf("\n[b] Swarms");
    printf("\n[c] Grubs");
    printf("\n[d] U.R.I.");
    printf("\n ---------------------------------");
}
// Mostra a questao 3 de jogos a
void pergunta_3_jogos()
{
    printf("\n ---------------------------------");
    printf("\n No jogo League of Legends (LOL) quais sao os lugares que e possivel ver o dragao?");
    printf("\n[a] Na base da equipe azul, Na top lane e no covil do dragao");
    printf("\n[b] Somente no covil do dragao");
    printf("\n[c] Na ultimate do campeao Mordekaiser");
    printf("\n[d] Ele fica no meio do Mid");
    printf("\n ---------------------------------");
}
// Mostra a questao 4 de jogos d
void pergunta_4_jogos()
{
    printf("\n ---------------------------------");
    printf("\n Na saga de games Halo qual o nome da inteligencia artificial (IA) que acompanha o protagonista Master Chief?");
    printf("\n[a] Siri");
    printf("\n[b] Andromeda");
    printf("\n[c] Alexa");
    printf("\n[d] Cortana");
    printf("\n ---------------------------------");
}
// Mostra a questao 5 de jogos b
void pergunta_5_jogos()
{
    printf("\n ---------------------------------");
    printf("\n Quando foi lancado o primeiro Need For Speed?");
    printf("\n[a] 14 de Novembro 2002");
    printf("\n[b] 17 de Novembro 2003");
    printf("\n[c] 5 de Maio de 2003");
    printf("\n[d] 21 de Marco de 2002");
    printf("\n ---------------------------------");
}
// Mostra a questao 6 de jogos c
void pergunta_6_jogos()
{
    printf("\n ---------------------------------");
    printf("\n No jogo Call Of Duty Black Ops, no modo Zumbis, no mapa Call Of The Dead, qual o individuo que fica lhe persiguindo durante toda a jogatina?");
    printf("\n[a] Danny Trejo");
    printf("\n[b] Tank Dempsey");
    printf("\n[c] George Romero");
    printf("\n[d] Sarrah Michelle Gellar");
    printf("\n ---------------------------------");
}
// Mostra a questao 7 de jogos a
void pergunta_7_jogos()
{
    printf("\n ---------------------------------");
    printf("\n No jogo Plants VS Zombis GardenWarfare 2, qual planta tem a habilidade de jogar uma bomba de feijao?");
    printf("\n[a] Dispara Ervilha");
    printf("\n[b] Cacto");
    printf("\n[c] Laranja");
    printf("\n[d] Planta Dragao");
    printf("\n ---------------------------------");
}
// Mostra a questao 8 de jogos b
void pergunta_8_jogos()
{
    printf("\n ---------------------------------");
    printf("\n No jogo Overwatch quais destes personagens sao suportes?");
    printf("\n[a] Reaper, Lucio e Mccre");
    printf("\n[b] Lucio, Mercy e Baptiste");
    printf("\n[c] Trase, Soldier 76 e Mei");
    printf("\n[d] Nenhuma das anteriores");
    printf("\n ---------------------------------");
}
// Mostra a questao 9 de jogos d
void pergunta_9_jogos()
{
    printf("\n ---------------------------------");
    printf("\n Quando foi lancado o primeiro Mortal Kombat e em qual plataforma?");
    printf("\n[a] PlayStation1 1997");
    printf("\n[b] Arcade 1995");
    printf("\n[c] Xbox 1999");
    printf("\n[d] Arcade 1992");
    printf("\n ---------------------------------");
}
// Mostra a questao 10 de jogos c
void pergunta_10_jogos()
{
    printf("\n ---------------------------------");
    printf("\n Quando surgiu o primeiro video game?");
    printf("\n[a] 1980");
    printf("\n[b] 1982");
    printf("\n[c] 1972");
    printf("\n[d] 1979");
    printf("\n ---------------------------------");
}
// Mostra a questao 1 de serie b
void pergunta_1_serie()
{
    printf("\n ---------------------------------");
    printf("\n Na serie Friends qual o nome do integrane engracado do grupo?");
    printf("\n[a] Chandler Bong");
    printf("\n[b] Chandler Ping");
    printf("\n[c] Monica");
    printf("\n[d] Joy");
    printf("\n ---------------------------------");
}
// Mostra a questao 2 de serie c
void pergunta_2_serie()
{
    printf("\n ---------------------------------");
    printf("\n Na serie Vikings qual no nome do personagem que se torna o primeiro rei de Kattegat");
    printf("\n[a] Floki");
    printf("\n[b] Bjorn Ironside");
    printf("\n[c] Ragnar Lothbrock");
    printf("\n[d] Ivar O Desossado");
    printf("\n ---------------------------------");
}
// Mostra a questao 3 de serie a
void pergunta_3_serie()
{
    printf("\n ---------------------------------");
    printf("\n Na serie Flash quem acaba sendo o Savitar?");
    printf("\n[a] Barry Allen");
    printf("\n[b] Iris West");
    printf("\n[c] Cisco Ramon");
    printf("\n[d] Flash Reverso");
    printf("\n ---------------------------------");
}
// Mostra a questao 4 de serie d
void pergunta_4_serie()
{
    printf("\n ---------------------------------");
    printf("\n Na serie The Walking Dead qual e o personagem que e mais conhecido por ter como arma uma besta?");
    printf("\n[a] Rick");
    printf("\n[b] Gleen");
    printf("\n[c] Morgan");
    printf("\n[d] Daryl");
    printf("\n ---------------------------------");
}
// Mostra a questao 5 de serie d
void pergunta_5_serie()
{
    printf("\n ---------------------------------");
    printf("\n Na serie Lucifer qual e a unica armas capaz de ferir Lucifer (quando esta longe da Chloe)");
    printf("\n[a] Espada Flamejante");
    printf("\n[b] Faca de Cobre");
    printf("\n[c] Balas cheias de agua benta");
    printf("\n[d] Adaga infernal");
    printf("\n ---------------------------------");
}
// Mostra a questao 6 de serie a
void pergunta_6_serie()
{
    printf("\n ---------------------------------");
    printf("\n Na serie Doctor Who quantas regeneracoes tem o Doutor(2019)?");
    printf("\n[a] 14");
    printf("\n[b] 13");
    printf("\n[c] 12");
    printf("\n[d] 15");
    printf("\n ---------------------------------");
}
// Mostra a questao 7 de serie c
void pergunta_7_serie()
{
    printf("\n ---------------------------------");
    printf("\n Na serie Arrow quem foi o primeiro a utilizar o Poco de Lazaro?");
    printf("\n[a] Oliver Queen");
    printf("\n[b] Thea Queen");
    printf("\n[c] Ra's Al Gul");
    printf("\n[d] Jason Todd");
    printf("\n ---------------------------------");
}
// Mostra a questao 8 de serie b
void pergunta_8_serie()
{
    printf("\n ---------------------------------");
    printf("\n Qual o vilao verdadeiro da quinta temporada de The Flash?");
    printf("\n[a] Zoom");
    printf("\n[b] Flash Reverso");
    printf("\n[c] Cicada");
    printf("\n[d] Antimonitor");
    printf("\n ---------------------------------");
}
// Mostra a questao 9 de serie c
void pergunta_9_serie()
{
    printf("\n ---------------------------------");
    printf("\n Na serie The Good Doctor qual problema principal que o Dr. Shaun Murphy tem?");
    printf("\n[a] Parkinson");
    printf("\n[b] Sindrome de Down");
    printf("\n[c] Altismo");
    printf("\n[d] Sindrome de Savant");
    printf("\n ---------------------------------");
}
// Mostra a questao 10 de serie c
void pergunta_10_serie()
{
    printf("\n ---------------------------------");
    printf("\n Na serie SmallVille qual desses poderes Clark Kent nao possui durante boa parte da serie?");
    printf("\n[a] Visao de Raio X");
    printf("\n[b] Super Forca");
    printf("\n[c] Poder de Voo");
    printf("\n[d] Super Velocidade");
    printf("\n ---------------------------------");
}
// Mostra a questao 1 de anime d
void pergunta_1_anime()
{
    printf("\n ---------------------------------");
    printf("\n Qual o anime mais longo da historia?");
    printf("\n[a] Doraemon");
    printf("\n[b] Dragon Ball Z");
    printf("\n[c] One Piece");
    printf("\n[d] Sazae-san");
    printf("\n ---------------------------------");
}
// Mostra a questao 2 de anime b
void pergunta_2_anime()
{
    printf("\n ---------------------------------");
    printf("\n Qual os dois mangas que atualmente competem pelo Manga Mais Vendido de 2019?");
    printf("\n[a] One Piece e Naruto");
    printf("\n[b] One Piece e Kimetsu No Yaiba");
    printf("\n[c] Boruto e Dragon Ball Super");
    printf("\n[d] Dragon Ball Super e Naruto");
    printf("\n ---------------------------------");
}
// Mostra a questao 3 de anime d
void pergunta_3_anime()
{
    printf("\n ---------------------------------");
    printf("\n Qual o Manga Mais vendido de todos os tempos?");
    printf("\n[a] Dragon Ball");
    printf("\n[b] Naruto");
    printf("\n[c] Astro Boy");
    printf("\n[d] One Piece");
    printf("\n ---------------------------------");
}
// Mostra a questao 4 de anime a
void pergunta_4_anime()
{
    printf("\n ---------------------------------");
    printf("\n Qual o nome da fruta que Luffy comeu pra ter seus poderes?");
    printf("\n[a] Gomu Gomu No Mi");
    printf("\n[b] Gura Gura No Mi");
    printf("\n[c] Fuwa Fuwa No Mi");
    printf("\n[d] Rubber Rubber No Mi");
    printf("\n ---------------------------------");
}
// Mostra a questao 5 de anime c
void pergunta_5_anime()
{
    printf("\n ---------------------------------");
    printf("\n Qual foi a primeira serie japonesa a passar no Brasil?");
    printf("\n[a] Astro Boy");
    printf("\n[b] Speed Racer");
    printf("\n[c] National Kid");
    printf("\n[d] Dragon Ball");
    printf("\n ---------------------------------");
}
// Mostra a questao 6 de anime d
void pergunta_6_anime()
{
    printf("\n ---------------------------------");
    printf("\n Qual desses que popularizou anime no Brasil?");
    printf("\n[a] Dragon Ball");
    printf("\n[b] Naruto");
    printf("\n[c] One Piece");
    printf("\n[d] Cavaleiros dos Zodiaco");
    printf("\n ---------------------------------");
}
// Mostra a questao 7 de anime d
void pergunta_7_anime()
{
    printf("\n ---------------------------------");
    printf("\n Em Dragon Ball qual o nome da transformacao que os Sayajins possuem?");
    printf("\n[a] Super Sayajins");
    printf("\n[b] Potara");
    printf("\n[c] Requiem");
    printf("\n[d] Oozaru");
    printf("\n ---------------------------------");
}
// Mostra a questao 8 de anime a
void pergunta_8_anime()
{
    printf("\n ---------------------------------");
    printf("\n Em Naruto Shippuden Quem dos viloes Mata o Personagem Jiraya?");
    printf("\n[a] Pain");
    printf("\n[b] Orochimaru");
    printf("\n[c] Madara");
    printf("\n[d] Kurama");
    printf("\n ---------------------------------");
}
// Mostra a questao 9 de anime d
void pergunta_9_anime()
{
    printf("\n ---------------------------------");
    printf("\n Qual o Nome do avo de Yuugi Muto na versao japonesa?");
    printf("\n[a] Yoshiaki Muto");
    printf("\n[b] Satoru Muto");
    printf("\n[c] Katsu Muto");
    printf("\n[d] Sugoroku Muto");
    printf("\n ---------------------------------");
}
// Mostra a questao 10 de anime c
void pergunta_10_anime()
{
    printf("\n ---------------------------------");
    printf("\n Qual desses animes foi feito por um brasileiro?");
    printf("\n[a] Bakuman");
    printf("\n[b] Sword Art Online");
    printf("\n[c] No Game No Life");
    printf("\n[d] Rakudai Kishi No Cavalry");
    printf("\n ---------------------------------");
}
// Mostra a questao 1 de automobilismo c
void pergunta_1_automobilismo()
{
    printf("\n ---------------------------------");
    printf("\n Na Formula 1, quantas vezes Ayrton Senna foi campeao mundial?");
    printf("\n[a] 5 vezes");
    printf("\n[b] 2 vezes");
    printf("\n[c] 3 vezes");
    printf("\n[d] 4 vezes");
    printf("\n ---------------------------------");
}
// Mostra a questao 2 de automobilismo d
void pergunta_2_automobilismo()
{
    printf("\n ---------------------------------");
    printf("\n Quantos cavalos tem uma Lamborghini Aventador?");
    printf("\n[a] 650 - 690 HP");
    printf("\n[b] 690 - 710 HP");
    printf("\n[c] 730 - 770 HP");
    printf("\n[d] 700 - 740 HP");
    printf("\n ---------------------------------");

}
// Mostra a questao 3 de automobilismo a
void pergunta_3_automobilismo()
{
    printf("\n ---------------------------------");
    printf("\n Qual o carro mais rapido do mundo?");
    printf("\n[a] Bugatti Veyron Super Sport");
    printf("\n[b] Koenigsegg Agera");
    printf("\n[c] McLaren F1");
    printf("\n[d] SSC Ultimate Aero");
    printf("\n ---------------------------------");
}
// Mostra a questao 4 de automobilismo c
void pergunta_4_automobilismo()
{
    printf("\n ---------------------------------");
    printf("\n Qual o carro mais caro do mundo?");
    printf("\n[a] Aston Martin Valkyrie");
    printf("\n[b] Rolls-Royce Sweptail");
    printf("\n[c] Bugatti La Voiture Noire");
    printf("\n[d] Lamborghini Veneno");
    printf("\n ---------------------------------");
}
// Mostra a questao 5 de automobilismo b
void pergunta_5_automobilismo()
{
    printf("\n ---------------------------------");
    printf("\n Qual foi a maior velocidade alcancada por um carro?");
    printf("\n[a] 450 Km/h");
    printf("\n[b] 490 Km/h");
    printf("\n[c] 480 Km/h");
    printf("\n[d] 465 Km/h");
    printf("\n ---------------------------------");
}
// Mostra a questao 6 de automobilismo d
void pergunta_6_automobilismo()
{
    printf("\n ---------------------------------");
    printf("\n  Qual o carro usado pelo protagonista de Velozes e Furiosos?");
    printf("\n[a] Toyota Supra");
    printf("\n[b] Mitsubishi Lancer Evolution");
    printf("\n[c] Dodge Challenger SRT 2010");
    printf("\n[d] Dodge Charger R/T 1970");
    printf("\n ---------------------------------");
}
// Mostra a questao 7 de automobilismo a
void pergunta_7_automobilismo()
{
    printf("\n ---------------------------------");
    printf("\n Qual a moto mais rapida do mundo?");
    printf("\n[a] Dodge Tomahawk");
    printf("\n[b] MTT Turbine Superbike Y2K");
    printf("\n[c] Suzuki Hayabusa");
    printf("\n[d] Aprilia RSV 1000R Mille");
    printf("\n ---------------------------------");
}
// Mostra a questao 8 de automobilismo c
void pergunta_8_automobilismo()
{
    printf("\n ---------------------------------");
    printf("\n Qual a potencia da Dodge Tomahawk?");
    printf("\n[a] 550 HP");
    printf("\n[b] 480 HP");
    printf("\n[c] 500 HP");
    printf("\n[d] 490 HP");
    printf("\n ---------------------------------");
}
// Mostra a questao 9 de automobilismo b
void pergunta_9_automobilismo()
{
    printf("\n ---------------------------------");
    printf("\n Qual empresa de carro mais rentavel?");
    printf("\n[a] Mercedes-Benz");
    printf("\n[b] Toyota");
    printf("\n[c] BMW");
    printf("\n[d] Ford");
    printf("\n ---------------------------------");
}
// Mostra a questao 10 de automobilismo d
void pergunta_10_automobilismo()
{
    printf("\n ---------------------------------");
    printf("\n Qual foi o Grande Premio onde Ayrton Senna faleceu?");
    printf("\n[a] Grande Premio da Italia");
    printf("\n[b] Grande Premio do Japao");
    printf("\n[c] Grande Premio de Chicago");
    printf("\n[d] Grande Premio de San Marino");
    printf("\n ---------------------------------");
}
// Mostra o procedimento de jogar
// Mostra a declaracao das variaveis e das respostas
void jogar()
{
    int tema, acertou=0, errou=0;
    char resposta_1_anime, resposta_1_automobilismo, resposta_1_computacao, resposta_1_jogos, resposta_1_serie;
    char resposta_2_anime, resposta_2_automobilismo, resposta_2_computacao, resposta_2_jogos, resposta_2_serie;
    char resposta_3_anime, resposta_3_automobilismo, resposta_3_computacao, resposta_3_jogos, resposta_3_serie;
    char resposta_4_anime, resposta_4_automobilismo, resposta_4_computacao, resposta_4_jogos, resposta_4_serie;
    char resposta_5_anime, resposta_5_automobilismo, resposta_5_computacao, resposta_5_jogos, resposta_5_serie;
    char resposta_6_anime, resposta_6_automobilismo, resposta_6_computacao, resposta_6_jogos, resposta_6_serie;
    char resposta_7_anime, resposta_7_automobilismo, resposta_7_computacao, resposta_7_jogos, resposta_7_serie;
    char resposta_8_anime, resposta_8_automobilismo, resposta_8_computacao, resposta_8_jogos, resposta_8_serie;
    char resposta_9_anime, resposta_9_automobilismo, resposta_9_computacao, resposta_9_jogos, resposta_9_serie;
    char resposta_10_anime, resposta_10_automobilismo, resposta_10_computacao, resposta_10_jogos, resposta_10_serie;
    temas();
    scanf("%d", &tema);
    // Mostra quando a pessoa selecionar o tema 1
    if (tema == 1)
    {
        printf("\t*========================================================================================================*\n");
                printf("\t|    ___       ___    ___     ___ _________ ___   ___ _________ _________    ___    _________    ___    |\n");
                printf("\t| ___XXX___ ___XXX___ XXX_   _XXX XXXXXXXXX XXX   XXX XXXXXXXXX XXXXXXXXX ___XXX___ XXXXXXXXX ___XXX___ |\n");
                printf("\t| XXX  _XXX XXX   XXX XXXX_ _XXXX XXX   XXX XXX   XXX XXXXXXXXX XXXXXXXXX XXX  _XXX XXXXXXXXX XXX   XXX |\n");
                printf("\t| XXX  XXX  XXX   XXX XXXXX_XXXXX XXX   XXX XXX   XXX    XXX    XXX   XXX XXX  XXX  XXX   XXX XXX   XXX |\n");
                printf("\t| XXX  ___  XXX   XXX XXXXXXXXXXX XXX   XXX XXX   XXX    XXX    XXX___XXX XXX  ___  XXX___XXX XXX   XXX |\n");
                printf("\t| XXX  XXX_ XXX   XXX XXXX X XXXX XXXXXXXXX XXX   XXX    XXX    XXXXXXXXX XXX  XXX_ XXXXXXXXX XXX   XXX |\n");
                printf("\t| XXX___XXX XXX___XXX XXXX   XXXX XXX       XXX___XXX    XXX    XXX   XXX XXX___XXX XXX   XXX XXX___XXX |\n");
                printf("\t|    XXX       XXX    XXXX   XXXX XXX          XXX       XXX    XXX   XXX    XXX    XXX   XXX    XXX    |\n");
                printf("\t|                                                                           _X                          |\n");
                printf("\t|                                                                           X                           |\n");
                printf("\t|                                                                                                       |\n");
                printf("\t*=======================================================================================================*\n\n");
        // Mostra a chamada da pergunta de computacao
        pergunta_1_computacao();
        scanf("%s", &resposta_1_computacao);
        if (resposta_1_computacao = 'd')
        {
            printf("\n Certa Resposta \n");
            acertou ++;
        }
        else
        {
            printf("\n Erouuuuuu \n");
            errou++;
        }
        // Mostra a chamada da pergunta de computacao
        pergunta_2_computacao();
        scanf("%s", &resposta_2_computacao);
        if (resposta_2_computacao == 'c')
        {
            printf("\n Exatamente \n");
            acertou++;
        }
        else
        {
            printf("\n Nao foi dessa vez. TENTE NOVAMENTE \n");
            errou++;
        }
        // Mostra a chamada da pergunta de computacao
        pergunta_3_computacao();
        scanf("%s", &resposta_3_computacao);
        if (resposta_3_computacao == 'd')
        {
            printf("\n O miseravel e um genio \n");
            acertou++;
        }
        else
        {
            printf("\n Erooooooou \n");
            errou++;
        }
        // Mostra a chamada da pergunta de computacao
        pergunta_4_computacao();
        scanf("%s", &resposta_4_computacao);
        if (resposta_4_computacao == 'b')
        {
            printf("\n Voce achou q tinha errado? Achou errado \n");
            acertou++;
        }
        else
        {
            printf("\n Estude mais \n");
            errou++;
        }
        // Mostra a chamada da pergunta de computacao
        pergunta_5_computacao();
        scanf("%s", &resposta_5_computacao);
        if (resposta_5_computacao == 'c')
        {
            printf("\n Ma que mizeravi \n");
            acertou++;
        }
        else
        {
            printf("\n Que azar \n");
            errou++;
        }
        // Mostra a chamada da pergunta de computacao
        pergunta_6_computacao();
        scanf("%s", &resposta_6_computacao);
        if (resposta_6_computacao == 'a')
        {
            printf("\n Por essa eu nao esperava \n");
            acertou++;
        }
        else
        {
            printf("\n Nao foi dessa vez \n");
            errou++;
        }
        // Mostra a chamada da pergunta de computacao
        pergunta_7_computacao();
        scanf("%s", &resposta_7_computacao);
        if (resposta_7_computacao == 'b')
        {
            printf("\n Seu conhecimento e mais de 8 mil \n");
            acertou++;
        }
        else
        {
            printf("\n QUE PATETICO \n");
            errou++;
        }
        // Mostra a chamada da pergunta de computacao
        pergunta_8_computacao();
        scanf("%s", &resposta_8_computacao);
        if (resposta_8_computacao == 'c')
        {
            printf("\n Maldito inceto acertou mais uma \n");
            acertou++;
        }
        else
        {
            printf("\n Idiota \n");
            errou++;
        }
        // Mostra a chamada da pergunta de computacao
        pergunta_9_computacao();
        scanf("%s", &resposta_9_computacao);
        if (resposta_9_computacao == 'a')
        {
            printf("\n Acerto mizeravi \n");
            acertou++;
        }
        else
        {
            printf("\n So sabe errar? \n");
            errou++;
        }
        // Mostra a chamada da pergunta de computacao
        pergunta_10_computacao();
        scanf("%s", &resposta_10_computacao);
        if (resposta_10_computacao == 'd')
        {
            printf("\n Quem diria voce acertou \n");
            acertou++;
        }
        else
        {
            printf("\n Que burro, da zero pra ele\n");
            errou++;
        }
        if (acertou == 10)
        {
        printf("\t*=====================================*\n");
        printf("\t|                XX                  |\n");
        printf("\t|               XXXX                 |\n");
        printf("\t|               XXXX                 |\n");
        printf("\t|              XXXXXX                |\n");
        printf("\t|       XXXXXXXXXXXXXXXXXXXX         |\n");
        printf("\t|         XXXXXXXXXXXXXXXX           |\n");
        printf("\t|          XXXXXXXXXXXXXX            |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|            XXXXXXXXXX              |\n");
        printf("\t|            XXXXXXXXXX              |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|          XXXXXX  XXXXXX            |\n");
        printf("\t|         XXXXX      XXXXX           |\n");
        printf("\t|        XXXX          XXXX          |\n");
        printf("\t|       XXX              XXX         |\n");
        printf("\t*=====================================*\n\n");
        printf("\n ---------------------------------");
        printf("\n PONTUACAO PERFEITA");
        printf("\n ---------------------------------\n");
        }
        // Mostra o resultado da partida
        printf("\n ---------------------------------");
        printf("\n FIM DE JOGO \n");
        printf("\n ---------------------------------");
        printf("\n ---------------------------------");
        printf("\n ---------------------------------");
        printf("\n Sua pontuacao foi de: ");
        printf("\n ---------------------------------");
        printf("\n ACERTOU = %d", acertou);
        printf("\n ---------------------------------");
        printf("\n ERROU = %d", errou);
        printf("\n ---------------------------------");
    }
    // Mostra se a pessoa escolher o tema 2
    else if (tema == 2)
    {
        printf("\t*===================================================================*\n");
                printf("\t|             ___ _________    ____       ___    _________       |\n");
                printf("\t|             XXX    XXX    ___XXXX___ ___XXX___ XXXXXXXXX       |\n");
                printf("\t|             XXX XXX   XXX XXX    XXX XXX   XXX XXXXXXXXX       |\n");
                printf("\t|             XXX XXX   XXX XXX   __   XXX   XXX XXX______       |\n");
                printf("\t|       ___   XXX XXX   XXX XXX   XX__ XXX   XXX XXXXXXXXX       |\n");
                printf("\t|       XXX   XXX XXX   XXX XXX    XXX XXX   XXX ______XXX       |\n");
                printf("\t|        XX___XXX XXX   XXX  XX____XXX XXX   XXX XXXXXXXXX       |\n");
                printf("\t|         XXXXX      XXX       XXXX       XXX    XXXXXXXXX       |\n");
                printf("\t|                                                                |\n");
                printf("\t*==========================================================\n\n");
        // Mostra a chamada da pergunta de jogos
        pergunta_1_jogos();
        scanf("%s", &resposta_1_jogos);
        if (resposta_1_jogos == 'c')
        {
            printf("\n Muito bem");
            acertou++;
        }
        else
        {
            printf("\n Tente novamente");
            errou++;
        }
        // Mostra a chamada da pergunta de jogos
        pergunta_2_jogos();
        scanf("%s", &resposta_2_jogos);
        if (resposta_2_jogos == 'b')
        {
            printf("\n Acerto mizeravi");
            acertou++;
        }
        else
        {
            printf("\n Vai ser burro la na esquina");
            errou++;
        }
        // Mostra a chamada da pergunta de jogos
        pergunta_3_jogos();
        scanf("%s", &resposta_3_jogos);
        if (resposta_3_jogos == 'a')
        {
            printf("\n O mizeravel e um genio");
            acertou++;
        }
        else
        {
            printf("\n Eroooooou");
            errou++;
        }
        // Mostra a chamada da pergunta de jogos
        pergunta_4_jogos();
        scanf("%s", &resposta_4_jogos);
        if (resposta_4_jogos == 'd')
        {
            printf("\n Parece que temos um Sherlock Homes aqui");
            acertou++;
        }
        else
        {
            printf("\n Errou mais uma, quer ajuda?");
            errou++;
        }
        // Mostra a chamada da pergunta de jogos
        pergunta_5_jogos();
        scanf("%s", &resposta_5_jogos);
        if (resposta_5_jogos == 'b')
        {
            printf("\n Aleluia acertou uma");
            acertou++;
        }
        else
        {
            printf("\n Voce parace burro");
            errou++;
        }
        // Mostra a chamada da pergunta de jogos
        pergunta_6_jogos();
        scanf("%s", &resposta_6_jogos);
        if (resposta_6_jogos == 'c')
        {
            printf("\n Parabens acertou uma");
            acertou++;
        }
        else
        {
            printf("\n Sabia que voce ia errar");
            errou++;
        }
        // Mostra a chamada da pergunta de jogos
        pergunta_7_jogos();
        scanf("%s", &resposta_7_jogos);
        if (resposta_7_jogos == 'a')
        {
            printf("\n Por essa eu nao esperava, acertou");
            acertou++;
        }
        else
        {
            printf("\n Mas que burro, da zero para ele");
            errou++;
        }
        // Mostra a chamada da pergunta de jogos
        pergunta_8_jogos();
        scanf("%s", &resposta_8_jogos);
        if (resposta_8_jogos == 'b')
        {
            printf("\n Acertou? Nao posso acreditar");
            acertou++;
        }
        else
        {
            printf("\n Acabou de perder a pergunta do milhao OTARIO");
            errou++;
        }
        // Mostra a chamada da pergunta de jogos
        pergunta_9_jogos();
        scanf("%s", &resposta_9_jogos);
        if (resposta_9_jogos == 'd')
        {
            printf("\n Pelo menos acertou uma");
            acertou++;
        }
        else
        {
            printf("\n Puts larga de ser besta e para de errar");
            errou++;
        }
        // Mostra a chamada da pergunta de jogos
        pergunta_10_jogos();
        scanf("%s", &resposta_10_jogos);
        if (resposta_10_jogos == 'c')
        {
            printf("\n Parece que temos um genio aqui\n");
            acertou++;
        }
        else
        {
            printf("\n Nossa conseguiu erra uma pergunta facil\n");
        }
        if (acertou == 10)
        {
        printf("\t*=====================================*\n");
        printf("\t|                XX                  |\n");
        printf("\t|               XXXX                 |\n");
        printf("\t|               XXXX                 |\n");
        printf("\t|              XXXXXX                |\n");
        printf("\t|       XXXXXXXXXXXXXXXXXXXX         |\n");
        printf("\t|         XXXXXXXXXXXXXXXX           |\n");
        printf("\t|          XXXXXXXXXXXXXX            |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|            XXXXXXXXXX              |\n");
        printf("\t|            XXXXXXXXXX              |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|          XXXXXX  XXXXXX            |\n");
        printf("\t|         XXXXX      XXXXX           |\n");
        printf("\t|        XXXX          XXXX          |\n");
        printf("\t|       XXX              XXX         |\n");
        printf("\t*=====================================*\n\n");
        printf("\n ---------------------------------");
        printf("\n PONTUACAO PERFEITA");
        printf("\n ---------------------------------\n");
        }
        // Mostra o resultado da partida
        printf("\n ---------------------------------");
        printf("\n FIM DE JOGO \n");
        printf("\n ---------------------------------");
        printf("\n ---------------------------------");
        printf("\n ---------------------------------");
        printf("\n Sua pontuacao foi de: ");
        printf("\n ---------------------------------");
        printf("\n ACERTOU = %d", acertou);
        printf("\n ---------------------------------");
        printf("\n ERROU = %d", errou);
        printf("\n ---------------------------------");
    }
    // Mostra se a pessoa seleciona o tema 3
    else if (tema == 3)
    {
        printf("\t*===================================================================*\n");
                printf("\t|       _________ _________ _________ ___ __________            |\n");
                printf("\t|       XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXXXXXXXXX            |\n");
                printf("\t|       XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXXXXXXXXX            |\n");
                printf("\t|       XXX______ XXX____   XXX____XX XXX XXX_____              |\n");
                printf("\t|       XXXXXXXXX XXXXXXX   XXXXXXXXX XXX XXXXXXXX              |\n");
                printf("\t|       ______XXX XXX______ XXX XXXXX XXX XXX_______            |\n");
                printf("\t|       XXXXXXXXX XXXXXXXXX XXX  XXXX XXX XXXXXXXXXX            |\n");
                printf("\t|       XXXXXXXXX XXXXXXXXX XXX   XXX XXX XXXXXXXXXX            |\n");
                printf("\t|                                                               |\n");
                printf("\t*===================================================================*\n\n");
        // Mostra a chamada da pergunta de serie
        pergunta_1_serie();
        scanf("%s", &resposta_1_serie);
        if (resposta_1_serie == 'b')
        {
            printf("\n Ora Ora conseguiu acertar");
            acertou++;
        }
        else
        {
            printf("\n KKKKKKK Ja errou?!");
            errou++;
        }
        // Mostra a chamada da pergunta de serie
        pergunta_2_serie();
        scanf("%s", &resposta_2_serie);
        if (resposta_2_serie == 'c')
        {
            printf("\n O miseravel e um genio");
            acertou++;
        }
        else
        {
            printf("\n Ja esperava que voce ia errar");
            errou++;
        }
        // Mostra a chamada da pergunta de serie
        pergunta_3_serie();
        scanf("%s", &resposta_3_serie);
        if (resposta_3_serie == 'a')
        {
            printf("\n Acertou? Aleluia");
            acertou++;
        }
        else
        {
            printf("\n Nossa, errou uma facil");
            errou++;
        }
        // Mostra a chamada da pergunta de serie
        pergunta_4_serie();
        scanf("&s", &resposta_4_serie);
        if (resposta_4_serie == 'd')
        {
            printf("\n Parece que temos um genio aqui");
            acertou++;
        }
        else
        {
            printf("\n Vai ser burro em outro pais");
            errou++;
        }
        // Mostra a chamada da pergunta de serie
        pergunta_5_serie();
        scanf("%s", &resposta_5_serie);
        if (resposta_5_serie == 'd')
        {
            printf("\n Uau acertou uma facil");
            acertou++;
        }
        else
        {
            printf("\n E la se vai sua chance de ganhar o jogo");
            errou++;
        }
        // Mostra a chamada da pergunta de serie
        pergunta_6_serie();
        scanf("%s", &resposta_6_serie);
        if (resposta_6_serie == 'a')
        {
            printf("\n Meu Deus e o Sherlock Homes em acao");
            acertou++;
        }
        else
        {
            printf("\n Que pena errou mais uma");
            errou++;
        }
        // Mostra a chamada da pergunta de serie
        pergunta_7_serie();
        scanf("%s", &resposta_7_serie);
        if (resposta_7_serie == 'b')
        {
            printf("\n Parabens, da proxima nao sera facil");
            acertou++;
        }
        else
        {
            printf("\n Voce nao cansa de errar?");
            errou++;
        }
        // Mostra a chamada da pergunta de serie
        pergunta_8_serie();
        scanf("%s", &resposta_8_serie);
        if (resposta_8_serie == 'b')
        {
            printf("\n Um milagre, voce acertou");
            acertou++;
        }
        else
        {
            printf("\n Haha, errado mais uma vez");
            errou++;
        }
        // Mostra a chamada da pergunta de serie
        pergunta_9_serie();
        scanf("%s", &resposta_9_serie);
        if (resposta_9_serie == 'c')
        {
            printf("\n Ora ora temos um ganhador");
            acertou++;
        }
        else
        {
            printf("\n Para de errar seu mane");
            errou++;
        }
        // Mostra a chamada da pergunta de serie
        pergunta_10_serie();
        scanf("%s", &resposta_10_serie);
        if (resposta_10_serie == 'c')
        {
            printf("\n Voce merece um premio\n");
            acertou++;
        }
        else
        {
            printf("\n Sabia que voce ia errar\n");
            errou++;
        }
        if (acertou == 10)
        {
        printf("\t*=====================================*\n");
        printf("\t|                XX                  |\n");
        printf("\t|               XXXX                 |\n");
        printf("\t|               XXXX                 |\n");
        printf("\t|              XXXXXX                |\n");
        printf("\t|       XXXXXXXXXXXXXXXXXXXX         |\n");
        printf("\t|         XXXXXXXXXXXXXXXX           |\n");
        printf("\t|          XXXXXXXXXXXXXX            |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|            XXXXXXXXXX              |\n");
        printf("\t|            XXXXXXXXXX              |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|          XXXXXX  XXXXXX            |\n");
        printf("\t|         XXXXX      XXXXX           |\n");
        printf("\t|        XXXX          XXXX          |\n");
        printf("\t|       XXX              XXX         |\n");
        printf("\t*=====================================*\n\n");
        printf("\n ---------------------------------");
        printf("\n PONTUACAO PERFEITA");
        printf("\n ---------------------------------\n");
        }
        // Mostra o resultado da partida
        printf("\n ---------------------------------");
        printf("\n FIM DE JOGO \n");
        printf("\n ---------------------------------");
        printf("\n ---------------------------------");
        printf("\n ---------------------------------");
        printf("\n Sua pontuacao foi de: ");
        printf("\n ---------------------------------");
        printf("\n ACERTOU = %d", acertou);
        printf("\n ---------------------------------");
        printf("\n ERROU = %d", errou);
        printf("\n ---------------------------------");
    }
    // Mostra se a pessoa escolher o 4 tema
    else if (tema == 4)
    {
        printf("\t*===================================================================*\n");
                printf("\t|       _________ ___   ___ ___ ____     ____ __________            |\n");
                printf("\t|       XXXXXXXXX XXX_  XXX XXX XXXX_   _XXXX XXXXXXXXXX            |\n");
                printf("\t|       XXXXXXXXX XXXX_ XXX XXX XXXXX_ _XXXXX XXXXXXXXXX            |\n");
                printf("\t|       XXX___XXX XXXXX_XXX XXX XXXXXX_XXXXXX XXX_____              |\n");
                printf("\t|       XXXXXXXXX XXXXXXXXX XXX XXXXXXXXXXXXX XXXXXXXX              |\n");
                printf("\t|       XXXXXXXXX XXX XXXXX XXX XXXXX X XXXXX XXX_______            |\n");
                printf("\t|       XXX   XXX XXX  XXXX XXX XXXXX   XXXXX XXXXXXXXXX            |\n");
                printf("\t|       XXX   XXX XXX   XXX XXX XXXXX   XXXXX XXXXXXXXXX            |\n");
                printf("\t|                                                                   |\n");
                printf("\t*===================================================================*\n\n");
        // Mostra a chamada da pergunta de anime
        pergunta_1_anime();
        scanf("%s", &resposta_1_anime);
        if (resposta_1_anime == 'd')
        {
            printf("\n Parece que temos um Sherlock Homes");
            acertou++;
        }
        else
        {
            printf("\n Eroooooooou");
            errou++;
        }
        // Mostra a chamada da pergunta de anime
        pergunta_2_anime();
        scanf("%s", &resposta_2_anime);
        if (resposta_2_anime == 'b')
        {
            printf("\n Mas que espertinho");
            acertou++;
        }
        else
        {
            printf("\n Burro, estude mais");
            errou++;
        }
        // Mostra a chamada da pergunta de anime
        pergunta_3_anime();
        scanf("%s", &resposta_3_anime);
        if (resposta_3_anime == 'd')
        {
            printf("\n O miseravel e um genio");
            acertou++;
        }
        else
        {
            printf("\n Mas que burro, da zero para ele");
            errou++;
        }
        // Mostra a chamada da pergunta de anime
        pergunta_4_anime();
        scanf("%s", &resposta_4_anime);
        if (resposta_4_anime == 'a')
        {
            printf("\n Que esperto");
            acertou++;
        }
        else
        {
            printf("\n Errou uma facil HAHAHA");
            errou++;
        }
        // Mostra a chamada da pergunta de anime
        pergunta_5_anime();
        scanf("%s", &resposta_5_anime);
        if (resposta_5_anime == 'c')
        {
            printf("\n Ta saindo da jaula o monstro");
            acertou++;
        }
        else
        {
            printf("\n Para de errar");
            errou++;
        }
        // Mostra a chamada da pergunta de anime
        pergunta_6_anime();
        scanf("%s", &resposta_6_anime);
        if (resposta_6_anime == 'd')
        {
            printf("\n Temos um vencedor");
            acertou++;
        }
        else
        {
            printf("\n Que azar, voce perdeu");
            errou++;
        }
        // Mostra a chamada da pergunta de anime
        pergunta_7_anime();
        scanf("%s", &resposta_7_anime);
        if (resposta_7_anime == 'd')
        {
            printf("\n Seu conhecimento e mais de 8 mil");
            acertou++;
        }
        else
        {
            printf("\n Tirou 0, repete o ano");
            errou++;
        }
        // Mostra a chamada da pergunta de anime
        pergunta_8_anime();
        scanf("%s", &resposta_8_anime);
        if (resposta_8_anime == 'a')
        {
            printf("\n Olhem um genio em acao");
            acertou++;
        }
        else
        {
            printf("\n Seu velho tarado, errou");
            errou++;
        }
        // Mostra a chamada da pergunta de anime
        pergunta_9_anime();
        scanf("%s", &resposta_9_anime);
        if (resposta_9_anime == 'd')
        {
            printf("\n E o premio vai para voce");
            acertou++;
        }
        else
        {
            printf("\n Para voce nunca sera a hora do duelo");
            errou++;
        }
        // Mostra a chamada da pergunta de anime
        pergunta_10_anime();
        scanf("%s", &resposta_10_anime);
        if (resposta_10_anime == 'c')
        {
            printf("\n Acertou, pegue sua medalha\n");
            acertou++;
        }
        else
        {
            printf("\n DAME DA NE DAME YO DAME NA NO YO\n");
            errou++;
        }
        if (acertou == 10)
        {
        printf("\t*=====================================*\n");
        printf("\t|                XX                  |\n");
        printf("\t|               XXXX                 |\n");
        printf("\t|               XXXX                 |\n");
        printf("\t|              XXXXXX                |\n");
        printf("\t|       XXXXXXXXXXXXXXXXXXXX         |\n");
        printf("\t|         XXXXXXXXXXXXXXXX           |\n");
        printf("\t|          XXXXXXXXXXXXXX            |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|            XXXXXXXXXX              |\n");
        printf("\t|            XXXXXXXXXX              |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|          XXXXXX  XXXXXX            |\n");
        printf("\t|         XXXXX      XXXXX           |\n");
        printf("\t|        XXXX          XXXX          |\n");
        printf("\t|       XXX              XXX         |\n");
        printf("\t*=====================================*\n\n");
        printf("\n ---------------------------------");
        printf("\n PONTUACAO PERFEITA");
        printf("\n ---------------------------------\n");
        }
        // Mostra o resultado da partida
        printf("\n ---------------------------------");
        printf("\n FIM DE JOGO \n");
        printf("\n ---------------------------------");
        printf("\n ---------------------------------");
        printf("\n ---------------------------------");
        printf("\n Sua pontuacao foi de: ");
        printf("\n ---------------------------------");
        printf("\n ACERTOU = %d", acertou);
        printf("\n ---------------------------------");
        printf("\n ERROU = %d", errou);
        printf("\n ---------------------------------");
    }
    // Mostra se a pessoa escolher o tema 5
    else if (tema == 5)
    {
        printf("\t*=============================================================================================================*\n");
                printf("\t|_________ ___   ___ _________    ___    ___     ___    ___    ________  ___ ___     ___ ___     ___    ___   |\n");
                printf("\t|XXXXXXXXX XXX   XXX XXXXXXXXX ___XXX___ XXX_   _XXX ___XXX___ XXXXXXXX_ XXX XXX     XXX XXX_   _XXX ___XXX___|\n");
                printf("\t|XXXXXXXXX XXX   XXX XXXXXXXXX XXX   XXX XXXX_ _XXXX XXX   XXX XXX   XXX XXX XXX     XXX XXXX_ _XXXX XXX   XXX|\n");
                printf("\t|XXX   XXX XXX   XXX    XXX    XXX   XXX XXXXX_XXXXX XXX   XXX XXX___XXX XXX XXX     XXX XXXXX_XXXXX XXX   XXX|\n");
                printf("\t|XXX   XXX XXX   XXX    XXX    XXX   XXX XXXXXXXXXXX XXX   XXX XXXXXXXX_ XXX XXX     XXX XXXXXXXXXXX XXX   XXX|\n");
                printf("\t|XXXXXXXXX XXX   XXX    XXX    XXX   XXX XXXX X XXXX XXX   XXX XXX   XXX XXX XXX____ XXX XXXX X XXXX XXX   XXX|\n");
                printf("\t|XXX   XXX XXX___XXX    XXX    XXX___XXX XXXX   XXXX XXX___XXX XXX___XXX XXX XXXXXXX XXX XXXX   XXXX XXX   XXX|\n");
                printf("\t|XXX   XXX    XXX       XXX       XXX    XXXX   XXXX    XXX    XXXXXXXX  XXX XXXXXXX XXX XXXX   XXXX    XXX   |\n");
                printf("\t|                                                                                                             |\n");
                printf("\t*=============================================================================================================*\n\n");
        // Mostra a chamada da pergunta de automobilismo
        pergunta_1_automobilismo();
        scanf("%s", &resposta_1_computacao);
        if (resposta_1_automobilismo == 'c')
        {
            printf("\n E o partipante sai na lideranca");
            acertou++;
        }
        else
        {
            printf("\n Voce fundiu o seu motor");
            errou++;
        }
        // Mostra a chamada da pergunta de automobilismo
        pergunta_2_automobilismo();
        scanf("%s", &resposta_2_automobilismo);
        if (resposta_2_automobilismo == 'd')
        {
            printf("\n E voce fica em primeiro no podio");
            acertou++;
        }
        else
        {
            printf("\n Voce passou em cima do buraco e perdeu a roda");
            errou++;
        }
        // Mostra a chamada da pergunta de automobilismo
        pergunta_3_automobilismo();
        scanf("%s", &resposta_3_automobilismo);
        if (resposta_3_automobilismo == 'a')
        {
            printf("\n Pegue seu carro e acelere");
            acertou++;
        }
        else
        {
            printf("\n Sua gasolina acabou");
            errou++;
        }
        // Mostra a chamada da pergunta de automobilismo
        pergunta_4_automobilismo();
        scanf("%s", &resposta_4_automobilismo);
        if (resposta_5_automobilismo == 'c')
        {
            printf("\n Seu investimento foi bom");
            acertou++;
        }
        else
        {
            printf("\n Jogou seu dinheiro no lixo");
            errou++;
        }
        // Mostra a chamada da pergunta de automobilismo
        pergunta_5_automobilismo();
        scanf("%s", &resposta_5_automobilismo);
        if (resposta_5_automobilismo == 'b')
        {
            printf("\n Voce ultrapassou a velocidade do som");
            acertou++;
        }
        else
        {
            printf("\n Voce caiu do carro e faleceu");
            errou++;
        }
        // Mostra a chamada da pergunta de automobilismo
        pergunta_6_automobilismo();
        scanf("%s", &resposta_6_automobilismo);
        if (resposta_6_automobilismo == 'd')
        {
            printf("\n Seu filme foi um sucesso");
            acertou++;
        }
        else
        {
            printf("\n Voce capotou");
        }
        // Mostra a chamada da pergunta de automobilismo
        pergunta_7_automobilismo();
        scanf("%s", &resposta_7_automobilismo);
        if (resposta_7_automobilismo == 'a')
        {
            printf("\n Os ventos sopram a seu favor");
            acertou++;
        }
        else
        {
            printf("\n Voce caiu da moto");
            errou++;
        }
        // Mostra a chamada da pergunta de automobilismo
        pergunta_8_automobilismo();
        scanf("%s", &resposta_8_automobilismo);
        if (resposta_8_automobilismo == 'c')
        {
            printf("\n Potencia perfeita");
            acertou++;
        }
        else
        {
            printf("\n Seu motor explodiu");
            errou++;
        }
        // Mostra a chamada da pergunta de automobilismo
        pergunta_9_automobilismo();
        scanf("%s", &resposta_9_automobilismo);
        if (resposta_9_automobilismo == 'b')
        {
            printf("\n Sua economia foi boa");
            acertou++;
        }
        else
        {
            printf("\n Voce detonoun com suas economias");
            errou++;
        }
        // Mostra a chamada da pergunta de automobilismo
        pergunta_10_automobilismo();
        scanf("%s", &resposta_10_automobilismo);
        if (resposta_10_automobilismo == 'd')
        {
            printf("\n Pista certa com codicoes certas\n");
            acertou++;
        }
        else
        {
            printf("\n Pista em pessimo estado, voce perdeu\n");
            errou++;
        }
        if (acertou == 10)
        {
        printf("\t*=====================================*\n");
        printf("\t|                XX                  |\n");
        printf("\t|               XXXX                 |\n");
        printf("\t|               XXXX                 |\n");
        printf("\t|              XXXXXX                |\n");
        printf("\t|       XXXXXXXXXXXXXXXXXXXX         |\n");
        printf("\t|         XXXXXXXXXXXXXXXX           |\n");
        printf("\t|          XXXXXXXXXXXXXX            |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|            XXXXXXXXXX              |\n");
        printf("\t|            XXXXXXXXXX              |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|           XXXXXXXXXXXX             |\n");
        printf("\t|          XXXXXX  XXXXXX            |\n");
        printf("\t|         XXXXX      XXXXX           |\n");
        printf("\t|        XXXX          XXXX          |\n");
        printf("\t|       XXX              XXX         |\n");
        printf("\t*=====================================*\n\n");
        printf("\n ---------------------------------");
        printf("\n PONTUACAO PERFEITA");
        printf("\n ---------------------------------\n");
        }
        // Mostra o resultado da partida
        printf("\n ---------------------------------");
        printf("\n FIM DE JOGO \n");
        printf("\n ---------------------------------");
        printf("\n ---------------------------------");
        printf("\n ---------------------------------");
        printf("\n Sua pontuacao foi de: ");
        printf("\n ---------------------------------");
        printf("\n ACERTOU = %d", acertou);
        printf("\n ---------------------------------");
        printf("\n ERROU = %d", errou);
        printf("\n ---------------------------------");
    }
}
// Mostra o desenvolvimento para o funcionamento do programa
int main()
{
    int menu;
    do
    {
       system("cls");
       mostra_menu_principal();
       scanf("%d", &menu);
       if (menu == 1)
       {
           jogar();
       }
       else if (menu == 2)
       {
           Como_Jogar();
       }
       else if (menu == 3)
       {
           Creditos();
       }
       else if (menu != 4)
       {
           printf("\n Opcao invalida");
       }
       getch();
    }   while (menu != 4);
}
