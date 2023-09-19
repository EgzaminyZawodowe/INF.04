export default function App() 
{
  // definiujemy "tablicę asocjacyjną"
  const formData = {}
  formData['title'] = '';
  formData['genre'] = '';

  // zdarzenia zmiany wartości oraz kliknięcia przycisku
  const handleChange = event => formData[event.target.id] = event.target.value;
  const handleButton = event => 
  { 
    event.preventDefault();
    console.log(`tytul: ${formData['title']} rodzaj: ${formData['genre']}`);
  }

  // formularz
  return (
    <form>
      <div className="form-group mb-3">
        <label htmlFor="title" className="form-label">Tytuł filmu</label>
        <input id="title" className="form-control" defaultValue={formData['title']} onChange={handleChange} type="text"/>
      </div>
      <div className="form-group mb-3">
        <label htmlFor="genre" className="form-label">Rodzaj</label>
        <select id="genre" className="form-select" defaultValue={formData['genre']} onChange={handleChange}>
          <option value=""></option>
          <option value="1">Komedia</option>
          <option value="2">Obyczajowy</option>
          <option value="3">Sensacyjny</option>
          <option value="4">Horror</option>
        </select>
      </div>
      <div className="form-group">
        <button type="button" className="btn btn-primary" onClick={handleButton}>Dodaj</button>
      </div>    
    </form>
  );
}