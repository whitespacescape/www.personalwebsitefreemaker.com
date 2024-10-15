Imports "S.c"
Imports "T.c"
Imports "darkenergy.cs"
Imports "darkmatter.c"
DIM woldwideweb as www
Dim request As HttpWebRequest = DirectCast(WebRequest.Create("https://www.personalwebsitefreemaker.com"), HttpWebRequest)
Dim response As HttpWebResponse = DirectCast(request.GetResponse(), HttpWebResponse)
