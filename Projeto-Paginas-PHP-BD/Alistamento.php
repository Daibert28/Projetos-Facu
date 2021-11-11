<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
		<link rel="stylesheet" href="styles3.css"> 
	</head>

<?php
//ISO-8859-1
$data = date("Y-m-d");
$hora = date("H:i:s");
$novadata = substr($data,8,2) . "/" .substr($data,5,2) . "/" . substr($data,0,4);
$novahora = substr($hora,0,2) . "h" .substr($hora,3,2) . "min";

?>
<center>
<font color="black" face="Copperplate Gothic" size="10px">
<h1>Sistema de Alistamento</h1>
</font>
<br>
<form action='inserir.php' method='post'>
<table>
<tr>
		<td>
		<font color="white" face="Copperplate Gothic" size="5px">
				CPF:
			</font>
			</td>
			<td>
		<font color="white" face="Copperplate Gothic" size="5px">
			<input name='txtCpf' type='text' size=30> *
		</font>
		</td>
	</tr>
	<tr>
		<td>
		<font color="white" face="Copperplate Gothic" size="5px">
				Nome:
			</font>
			</td>
			<td>
		<font color="white" face="Copperplate Gothic" size="5px">
			<input name='txtNome' type='text' size=30> *
		</font>
		</td>
	</tr>
	<tr>
		<td>
		<font color="white" face="Copperplate Gothic" size="5px">
			Sobrenome:
		</font>
		</td>
		<td>
		<font color="white" face="Copperplate Gothic" size="5px">
			<input name='txtSobrenome' type='text' size=30> *
		</font>
		</td>
	</tr>
	<tr>
		<td>
		<font color="white" face="Copperplate Gothic" size="5px">
			Cidade:
		</font>
	</td>
	<td>
		<font color="white" face="Copperplate Gothic" size="5px">
			<input name='txtCidade' type='text' size=30> *
		</font>
		</td>
	</tr>
	<tr>
		<td>
		<font color="white" face="Copperplate Gothic" size="5px">
			Estado:<i>(Exemplo: SP, RS, BA)</i>
		</font>
	</td>
	<td>
		<font color="white" face="Copperplate Gothic" size="5px">
			<input name='txtEstado' type='text' size=30> *
		</font>
		</td>
	</tr>
	<tr>
		<td>
		<font color="white" face="Copperplate Gothic" size="5px">
			Email:
		</font>
	</td>
		<td>
		<font color="white" face="Copperplate Gothic" size="5px">
			<input name='txtEmail' type='text' size=30> *
		</font>
		</td>
	</tr>
	<tr>
		<td>
		<font color="white" face="Copperplate Gothic" size="5px">
			Categoria de combatente (Padrao, ODST ou SPARTAN):
		</font>
		</td>
		<td>
		<font color="white" face="Copperplate Gothic" size="5px">
			<textarea name='txtTexto' rows=1 cols=31></textarea>*
		</font>
		</td>
	</tr>
</table>
	<?php 
	echo "<input name='txtData' type='hidden' value='$data'><input name='txtHora' type='hidden' value='$hora'>";
	echo "<input type='submit' value='Cadastrar'>";
	?>
</form>
<a href="Boas_Vindas.php">Voltar a tela principal</a>
</center>
<br><hr>
<font color="white" face="Copperplate Gothic" size="5px">
<i>Campos marcados com <b>*</b> são obrigatórios no cadastro.<br>
<b>Observação</b>: Será inserido no seu cadastro a data atual, bem como a hora atual do cadastro<br>
</font>
<font color="white" face="Copperplate Gothic" size="3px">
<?php 
echo "Data: $novadata - Hora: $novahora<br>";
?>
</font>
</html>
